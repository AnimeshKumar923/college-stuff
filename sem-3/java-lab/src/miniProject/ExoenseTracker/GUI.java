package miniProject.ExpenseTracker;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.table.DefaultTableModel;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GUI {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Expense Tracker");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);

        JPanel panel = new JPanel();
        frame.add(panel);
        panel.setLayout(new BorderLayout());

        JTextField expenseNameField = new JTextField();
        JTextField expenseAmountField = new JTextField();
        JButton addButton = new JButton("Add Expense");

        DefaultTableModel tableModel = new DefaultTableModel();
        tableModel.addColumn("Expense Name");
        tableModel.addColumn("Amount");
        JTable expenseTable = new JTable(tableModel);

        JScrollPane scrollPane = new JScrollPane(expenseTable);

        panel.add(expenseNameField, BorderLayout.NORTH);
        panel.add(expenseAmountField, BorderLayout.CENTER);
        panel.add(addButton, BorderLayout.SOUTH);
        panel.add(scrollPane, BorderLayout.AFTER_LAST_LINE);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String name = expenseNameField.getText();
                String amount = expenseAmountField.getText();
                tableModel.addRow(new Object[]{name, amount});
                // Add code to save the data to the database here
                // You'll do this in Step 4
                expenseNameField.setText("");
                expenseAmountField.setText("");
            }
        });

        frame.setVisible(true);
    }

}
