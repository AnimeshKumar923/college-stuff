// SPDX-License-Identifier: MIT

// Deployed AND the functions are clear now.

// STATUS: documenting...
// Code working successfully :)
/*





=========================== How to use this contract on Remix IDE =======================

1. Open the Remix IDE in your web browser by visiting https://remix.ethereum.org/.

2. Creating a New File:
In the Remix IDE, click on the file icon on the mini upperbar of the panel to 
create a new file. Name it as you like and make sure it ends with '.sol' for example, 'MyFile.sol'. Now, paste the provided code into the file.

3. Compiling the Smart Contract:
In the Solidity Compiler panel on the left-hand side, select the appropriate compiler version (0.8.7 in this case). Click on the "Compile MyFile.sol" button to compile the smart contract. Ensure that the compilation is successful and that no errors or warnings are displayed.

4. Deploying the Smart Contract:
In the Deploy & Run Transactions panel, select the "MyFile" contract from the dropdown menu. Choose a desired network (such as JavaScript VM for local testing) and click the "Deploy" button. This will deploy the smart contract to the selected network. [NOTE: Local setup guide will be written and added later by me, for now, use the any online test servers]

5. After successful deployment of contract, follow the below section to interact with it. 





======================= Overview of this contract ======================

Once the contract is deployed, you can interact with it using the provided functions.
1. To create a loan, locate the createLoan function in the "Deployed Contracts" section. Enter the desired loan amount in the box next to it and click on the "createLoan"/"transact" button. Make sure you have sufficient funds in your selected network account to cover the loan amount.

2. To repay a loan, find the repayLoan function in the "Deployed Contracts" section. Enter the loan ID you want to repay and the repayment amount in the "Value" field (in wei). Then click on the "transact" button. 

- [Keep in mind that the ID initially starts with 0(zero) for the first loan instance and 1 for the second loan instance, just like array index]

3. You can also view the loan details by accessing the enquireLoans mapping and entering the desired ID of the loan instance, which provides information about each loan created.

4. The "totalLoans" function tells you about how many loan instances have been created at the given moment.






============================ A test case on how to use it ===========================

This test case covers the basic usage of the P2PLending contract, including creating a loan, verifying loan details, repaying the loan, and potentially refunding excess amounts. Feel free to modify the values and steps as per your testing requirements.

1. Deploy the Contract:
    - Compile the contract and deploy it to the desired network (e.g., JavaScript VM).

2. Create a Loan:
    - In the "Deployed Contracts" section, locate the createLoan function.
    - Enter a loan amount (in wei) in the box given along with the "createLoan" function. 
    For example, enter 1000000000000000000 wei for a loan amount of 1 ETH.
    - Click on the "createLoan"/"transact" button to create the loan.
    - Verify that the LoanCreated event is emitted and the loan is created.

3. Verify Loan Details:
    - Access the enquireLoans mapping in the "Deployed Contracts" section.
    - Enter the loan ID (0 in this case) and click on the "enquireLoan"Call"/ button. 
    [NOTE: The ID starts from 0 and corresponds to the index of the option in the options array. For example, if you want to vote for the first option, enter 0. If you want to vote for the second option, enter 1, and so on.]
    - Verify that the borrower address, loan amount, and repayment status are correct.

4. Repay the Loan:
    - In the "Deployed Contracts" section, locate the repayLoan function.
    - Enter the loan ID (0 in this case) and the repayment amount (in wei) in the "Value" field above the "Deploy" button. Make sure the repayment amount is equal to or greater than the loan amount.
    - Click on the "repayLoan"/"transact" button to repay the loan.
    - Verify that the LoanRepaid event is emitted and the loan repayment is recorded.
    - Check the contract's balance to ensure the repayment amount has been deducted.

5. Optional: Refund Excess Amount:
    - If you want to test the refunding of excess amount, repeat step 4 but enter a repayment amount greater than the loan amount (e.g., 2 ETH).
    - Verify that the excess amount is refunded back to the sender's address.
    - Even if you've entered excess amount than required, only the required loan-repayment amount is deducted.

=============================== DOCUMENTATION END ===============================




*/

pragma solidity >=0.4.0 <0.9.0;

contract P2PLending {
    struct Loan {
        address borrower;
        uint256 amount;
        bool repaid;
    }

    mapping(uint256 => Loan) public enquireLoans;
    uint256 public totalLoans;

    event LoanCreated(
        uint256 indexed loanId,
        address indexed borrower,
        uint256 amount
    );
    event LoanRepaid(
        uint256 indexed loanId,
        address indexed borrower,
        uint256 amount
    );

    function createLoan(uint256 amount) external payable {
        require(amount > 0, "Invalid loan amount");

        enquireLoans[totalLoans] = Loan(msg.sender, amount, false);
        emit LoanCreated(totalLoans, msg.sender, amount);

        totalLoans++;
    }

    function repayLoan(uint256 loanId) external payable {
        require(loanId < totalLoans, "Invalid loan ID");
        require(!enquireLoans[loanId].repaid, "Loan already repaid");
        require(
            msg.value >= enquireLoans[loanId].amount,
            "Insufficient repayment amount"
        );

        enquireLoans[loanId].repaid = true;
        emit LoanRepaid(
            loanId,
            enquireLoans[loanId].borrower,
            enquireLoans[loanId].amount
        );

        if (msg.value > enquireLoans[loanId].amount) {
            payable(msg.sender).transfer(
                msg.value - enquireLoans[loanId].amount
            ); // Refund excess amount
        }
    }
}
