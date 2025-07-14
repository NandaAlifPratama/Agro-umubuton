<?php

// database mahasiswa agroteknologi umu buton
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    
    $username = isset($_POST['username']) ? trim($_POST['username']) : '';
    $password = isset($_POST['password']) ? trim($_POST['password']) : '';

    
    if (empty($username) || empty($password)) {
        echo "Username dan password harus diisi.";
        exit;
    }

    if (!preg_match('/^[a-zA-Z0-9_]+$/', $username)) {
        echo "Username hanya boleh mengandung huruf, angka, dan garis bawah.";
        exit;
    }
    if (strlen($username) < 3 || strlen($username) > 20) {
        echo "Username harus antara 3 hingga 20 karakter.";
        exit;
    }

    elseif (!preg_match('/^[a-zA-Z0-9_]+$/', $password)) {
        echo "Password hanya boleh mengandung huruf, angka, dan garis bawah.";
        exit;
    }
    echo "Username dan password valid. Memproses login...";

    if ($username === $adminUsername && $password === $adminPassword) {
        echo "Login berhasil. Selamat datang, Admin!";

    } else {
        echo "Username atau password salah.";
    }
} else {
    echo "Akses tidak valid.";
}
?>