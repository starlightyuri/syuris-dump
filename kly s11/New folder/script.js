// ==================================================================
// MATERI: ALERT (Pop-up Sederhana)
// ==================================================================
alert("Selamat datang! Klik OK untuk menutup pop up.");


// ==================================================================
// MATERI: DOM SELECTION (Mengambil elemen HTML menggunakan getElementById)
// ==================================================================
let inputNamaLengkap   = document.getElementById("namaLengkap");
let inputNamaPanggilan = document.getElementById("namaPanggilan");
let inputUsia          = document.getElementById("usia");

let outNamaLengkap     = document.getElementById("outNamaLengkap");
let outNamaPanggilan   = document.getElementById("outNamaPanggilan");
let outUsia            = document.getElementById("outUsia");

let btnKirim           = document.getElementById("btnKirim");
let btnCekUmur         = document.getElementById("btnCekUmur");


// ==================================================================
// MATERI: EVENT HANDLER (Menjalankan kode saat tombol diklik)
// ==================================================================
btnKirim.onclick = function() {

    // ==================================================================
    // MATERI: MENGAMBIL NILAI DARI INPUT FORM
    // ==================================================================
    let namaLengkap   = inputNamaLengkap.value;      // tipe data: string
    let namaPanggilan = inputNamaPanggilan.value;    // tipe data: string
    let usia          = inputUsia.value;             // tipe data: number

    // ==================================================================
    // MATERI: LOGIKA DASAR (if/else untuk validasi form)
    // ==================================================================
    if (namaLengkap === "" || namaPanggilan === "" || usia === "") {
        alert("Semua data harus diisi!");
        return; // menghentikan fungsi jika ada input kosong
    }

    // ==================================================================
    // MATERI: DOM MANIPULATION (Mengubah isi elemen HTML)
    // ==================================================================
    outNamaLengkap.innerText   = namaLengkap;
    outNamaPanggilan.innerText = namaPanggilan;
    outUsia.innerText          = usia;

    // ==================================================================
    // MATERI: ALERT (Pop-up lanjutan setelah data terkirim)
    // ==================================================================
    alert("Selamat! Data kamu sudah terkirim.");
};


// ==================================================================
// MATERI: EVENT HANDLER + LOGIKA DASAR
// Tombol untuk mengecek usia menggunakan IF ELSE
// ==================================================================
btnCekUmur.onclick = function() {
    let usia = Number(outUsia.innerText); // konversi teks ke number

    if (usia >= 17) {
        alert("Kamu sudah cukup umur.");
    } else {
        alert("Kamu masih di bawah umur.");
    }
};
