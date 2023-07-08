// SPDX-License-Identifier: MIT
pragma solidity >=0.4.0 < 0.9.0;

contract CharityDonation {
    struct Charity {
        string name;
        uint256 totalDonations;
    }

    mapping(uint256 => Charity) public charities;
    uint256 public totalCharities;

    event DonationMade(address indexed donor, uint256 indexed charityId, uint256 amount);

    constructor() public {
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

