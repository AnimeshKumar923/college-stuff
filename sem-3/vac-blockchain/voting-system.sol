// SPDX-License-Identifier: MIT
// STATUS: documenting...
// Code working successfully :)
/*

================How to use this contract on Remix IDE========================

1. Open the Remix IDE in your web browser by visiting https://remix.ethereum.org/.

2. Create a New File:
In the Remix IDE, click on the file icon on the mini upperbar of the panel to 
create a new file. Name it as you like and make sure it ends with '.sol' for example, 'MyFile.sol'. Now, paste the provided code into the file.

3. Compile the Smart Contract:
In the Solidity Compiler panel on the left-hand side, select the appropriate compiler version (0.8.7 in this case). Click on the "Compile MyFile.sol" button to compile the smart contract. Ensure that the compilation is successful and that no errors or warnings are displayed.

4. Deploy the Smart Contract:
In the Deploy & Run Transactions panel, select the "MyFile" contract from the dropdown menu. Choose a desired network (such as JavaScript VM for local testing) and click the "Deploy" button. This will deploy the smart contract to the selected network. [NOTE: Local setup guide will be written and added later by me, for now, use the any online test servers]

5. After successful deployment of contract, follow the below section to interact with it. 

================How to use the functions in this contract====================

1. 'addOption' function:
    - Field: _name
    Input: Enter the name of the voting option you want to add. 
            For example, you can input "Option A" or "Candidate 1".

2. vote function:
    - Field: _optionId
    Input: Enter the ID of the voting option you want to vote for. 
            The ID starts from 0 and corresponds to the index of the option 
            in the options array. 
            For example, if you want to vote for the first option, enter 0. 
            If you want to vote for the second option, enter 1, and so on.

3. getOptionVoteCount function:
    - Field: _optionId
    Input: Enter the ID of the voting option for which you want to retrieve the vote count.
            Similar to the vote function, enter the corresponding ID based on 
            the option's index in the options array.

=============================A test case on how to use it===========================

    For example, let's say you have added two options: "Option A" and "Option B". 
    The first option ("Option A") will have an ID of 0, 
    and the second option ("Option B") will have an ID of 1.

   - To add an option, input the option name in the _name field of the addOption function.
   - To vote for "Option A", input 0 in the _optionId field of the vote function.
   - To retrieve the vote count for "Option B", input 1 in the _optionId field 
     of the getOptionVoteCount function.

*/


pragma solidity >=0.4.0 < 0.9.0;

contract VotingSystem {
    struct Option {
        string name;
        uint256 voteCount;
    }

    Option[] public options;
    mapping(address => bool) public voters;

    event VoteCasted(address indexed voter, uint256 indexed optionId);

    function addOption(string memory _name) public {
        options.push(Option(_name, 0));
    }

    function vote(uint256 _optionId) public {
        require(_optionId < options.length, "Invalid option ID");
        require(!voters[msg.sender], "Already voted");

        options[_optionId].voteCount++;
        voters[msg.sender] = true;

        emit VoteCasted(msg.sender, _optionId);
    }

    function getOptionCount() public view returns (uint256) {
        return options.length;
    }

    function getOptionVoteCount(uint256 _optionId) public view returns (uint256) {
        require(_optionId < options.length, "Invalid option ID");
        return options[_optionId].voteCount;
    }
}
