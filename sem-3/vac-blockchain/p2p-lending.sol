// SPDX-License-Identifier: MIT

// Deployed AND the functions are clear now.

// STATUS: documenting...
// Code working successfully :)
/*

===========================How to use this contract on Remix IDE========================

1. Open the Remix IDE in your web browser by visiting https://remix.ethereum.org/.

2. Creating a New File:
In the Remix IDE, click on the file icon on the mini upperbar of the panel to 
create a new file. Name it as you like and make sure it ends with '.sol' for example, 'MyFile.sol'. Now, paste the provided code into the file.

3. Compiling the Smart Contract:
In the Solidity Compiler panel on the left-hand side, select the appropriate compiler version (0.8.7 in this case). Click on the "Compile MyFile.sol" button to compile the smart contract. Ensure that the compilation is successful and that no errors or warnings are displayed.

4. Deploying the Smart Contract:
In the Deploy & Run Transactions panel, select the "MyFile" contract from the dropdown menu. Choose a desired network (such as JavaScript VM for local testing) and click the "Deploy" button. This will deploy the smart contract to the selected network. [NOTE: Local setup guide will be written and added later by me, for now, use the any online test servers]

5. After successful deployment of contract, follow the below section to interact with it. 



========================How to use the functions in this contract====================

Once the contract is deployed, you can interact with it using the provided functions.
1. To create a loan, locate the createLoan function in the "Deployed Contracts" section. Enter the desired loan amount in the box next to it and click on the "transact"/ "red createLoan" button. Make sure you have sufficient funds in your selected network account to cover the loan amount.

2. To repay a loan, find the repayLoan function in the "Deployed Contracts" section. Enter the loan ID you want to repay and the repayment amount in the "Value" field (in wei). Then click on the "transact" button. 

- [Keep in mind that the ID initially starts with 0(zero) for the first loan instance and 1 for the second loan instance, just like array index]

3. You can also view the loan details by accessing the enquireLoans mapping and entering the desired ID of the loan instance, which provides information about each loan created.

4. The "totalLoans" function tells you about how many loan instances have been created at the given moment.

=============================A test case on how to use it===========================



*/

pragma solidity >=0.4.0 < 0.9.0;

contract P2PLending {
    struct Loan {
        address borrower;
        uint256 amount;
        bool repaid;
    }

    mapping(uint256 => Loan) public enquireLoans;
    uint256 public totalLoans;

    event LoanCreated(uint256 indexed loanId, address indexed borrower, uint256 amount);
    event LoanRepaid(uint256 indexed loanId, address indexed borrower, uint256 amount);

    function createLoan(uint256 amount) external payable {
        require(amount > 0, "Invalid loan amount");

        enquireLoans[totalLoans] = Loan(msg.sender, amount, false);
        emit LoanCreated(totalLoans, msg.sender, amount);

        totalLoans++;
    }

    function repayLoan(uint256 loanId) external payable {
        require(loanId < totalLoans, "Invalid loan ID");
        require(!enquireLoans[loanId].repaid, "Loan already repaid");
        require(msg.value >= enquireLoans[loanId].amount, "Insufficient repayment amount");

        enquireLoans[loanId].repaid = true;
        emit LoanRepaid(loanId, enquireLoans[loanId].borrower, enquireLoans[loanId].amount);

        if (msg.value > enquireLoans[loanId].amount) {
            payable(msg.sender).transfer(msg.value - enquireLoans[loanId].amount);  // Refund excess amount
        }
    }
}

