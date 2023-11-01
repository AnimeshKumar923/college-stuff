package miniProject.ExpenseTracker;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.table.DefaultTableModel;

public class GUI {
    private DefaultTableModel tableModel;
    private JTextField expenseNameField;
    private JTextField expenseAmountField;

    public GUI() {
        JFrame frame = new JFrame("Expense Tracker");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);

        JPanel panel = new JPanel();
        frame.add(panel);
        panel.setLayout(new BorderLayout());

        expenseNameField = new JTextField();
        expenseAmountField = new JTextField();

        tableModel = new DefaultTableModel();
        tableModel.addColumn("Expense Name");
        tableModel.addColumn("Amount");
        JTable expenseTable = new JTable(tableModel);

        JScrollPane scrollPane = new JScrollPane(expenseTable);

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new GridLayout(2, 2));
        inputPanel.add(new JLabel("Expense Name:"));
        inputPanel.add(expenseNameField);
        inputPanel.add(new JLabel("Amount:"));
        inputPanel.add(expenseAmountField);

        // Create a new JPanel for the buttons
        JPanel buttonPanel = new JPanel();
        JButton addButton = new JButton("Add Expense");
        buttonPanel.add(addButton);

        panel.add(inputPanel, BorderLayout.NORTH);
        panel.add(scrollPane, BorderLayout.CENTER);
        panel.add(buttonPanel, BorderLayout.SOUTH);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addExpense();
            }
        });

        frame.setVisible(true);
    }

    private void addExpense() {
        String name = expenseNameField.getText();
        String amount = expenseAmountField.getText();
        tableModel.addRow(new Object[]{name, amount});
        // Add code to save the data to the database here
        // You'll do this in Step 4
        expenseNameField.setText("");
        expenseAmountField.setText("");
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new GUI());
    }
}
