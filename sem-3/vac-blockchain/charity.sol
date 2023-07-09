// SPDX-License-Identifier: MIT
// STATUS: Documenting...
// NOTE: Code is deploying but want more clarity on how this works as the code was written by my friends.

/*
================How to use this contract on Remix IDE========================

1. Open the Remix IDE in your web browser by visiting https://remix.ethereum.org/.

2. Create a New File:
In the Remix IDE, click on the file icon on the mini upperbar of the panel to 
create a new file. Name it as you like and make sure it ends with '.sol', 
for example - 'MyFile.sol'. Now, paste the provided code into the file.

3. Compile the Smart Contract:
In the Solidity Compiler panel on the left-hand side, select the appropriate compiler version (0.8.7 in this case). Click on the "Compile MyFile.sol" button to compile the smart contract. Ensure that the compilation is successful and that no errors or warnings are displayed.

4. Deploy the Smart Contract:
In the Deploy & Run Transactions panel, select the "MyFile" contract from the dropdown menu. Choose a desired network (such as JavaScript VM for local testing) and click the "Deploy" button. This will deploy the smart contract to the selected network. [NOTE: Local setup guide will be written and added later by me, for now, use the any online test servers]

5. After successful deployment of contract, follow the below section to interact with it. 




================How to use the functions in this contract====================

NOTE: The functions usage and transactions are still a bit confusing. Document it as you test the functions. That will make it easier to follow.



=============================A test case on how to use it===========================



*/
pragma solidity >=0.4.0 < 0.9.0;

contract CharityDonation {
    struct Charity {
        string name;
        uint256 totalDonations;
    }

    mapping(uint256 => Charity) public charities;
    uint256 public totalCharities;

    event DonationMade(address indexed donor, uint256 indexed charityId, uint256 amount);

    constructor() {
        totalCharities = 0;
    }

    function registerCharity(string memory name) public {
        charities[totalCharities] = Charity(name, 0);
        totalCharities++;
    }

    function makeDonation(uint256 charityId) public payable {
        require(charityId < totalCharities, "Invalid charity ID");
        charities[charityId].totalDonations += msg.value;
        emit DonationMade(msg.sender, charityId, msg.value);
    }

    function getCharityDonations(uint256 charityId) public view returns (uint256) {
        require(charityId < totalCharities, "Invalid charity ID");
        return charities[charityId].totalDonations;
    }
}

