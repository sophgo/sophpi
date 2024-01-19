int cvi_board_init(void)
{
	// wifi sdio pinmux
	mmio_write_32(0x030010D0, 0x0); // D3
	mmio_write_32(0x030010D4, 0x0); // D2
	mmio_write_32(0x030010D8, 0x0); // D1
	mmio_write_32(0x030010DC, 0x0); // D0
	mmio_write_32(0x030010E0, 0x0); // CMD
	mmio_write_32(0x030010E4, 0x0); // CLK

	// uart bluetooth
	mmio_write_32(0x03001070, 0x1); // GPIOA 28 UART1 TX
	mmio_write_32(0x03001074, 0x1); // GPIOA 29 UART1 RX
	mmio_write_32(0x03001068, 0x4); // GPIOA 18 UART1 CTS
	mmio_write_32(0x03001064, 0x4); // GPIOA 19 UART1 RTS

	// lcd backlight
	mmio_write_32(0x030010EC, 0x3); // GPIOB 0

	// camera function
	mmio_write_32(0x0300116C, 0x5); // RX4N CAM_MCLK0

	// camera/tp i2c
	mmio_write_32(0x03001090, 0x5); // PWR_GPIO6 IIC4_SCL
	mmio_write_32(0x03001098, 0x5); // PWR_GPIO8 IIC4_SDA

	// tp function
	mmio_write_32(0x03001084, 0x3);	// PWR_SEQ1 PWR_GPIO[3]
	mmio_write_32(0x03001088, 0x3);	// PWR_SEQ2 PWR_GPIO[4]

	return 0;
}
