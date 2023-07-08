const CharityDonation = artifacts.require("CharityDonation");

module.exports = function (deployer) {
  deployer.deploy(CharityDonation).then(() => {
    // Get the deployed contract instance
    const contractInstance = CharityDonation.deployed();

    // Log the contract address for reference
    contractInstance.then((instance) => {
      console.log("Contract deployed at address:", instance.address);
    });

    // Additional deployment steps or contract configuration can be added here
  });
};

