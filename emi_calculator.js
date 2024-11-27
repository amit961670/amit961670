document.getElementById('emi-form').addEventListener('submit', function(event) {
    event.preventDefault();

    const principal = parseFloat(document.getElementById('principal').value);
    const annualRate = parseFloat(document.getElementById('rate').value);
    const tenure = parseInt(document.getElementById('tenure').value);

    const monthlyRate = annualRate / (12 * 100);
    const emi = (principal * monthlyRate * Math.pow(1 + monthlyRate, tenure)) / (Math.pow(1 + monthlyRate, tenure) - 1);

    document.getElementById('result').innerText = `Your EMI is: ₹${emi.toFixed(2)}`;
});