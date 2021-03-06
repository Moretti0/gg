#undef MX6PAD
#undef MX6NAME
#undef MX6

#ifdef FOR_DL_SOLO
#define MX6(a) MX6DL_##a
#define MX6PAD(a) MX6DL_PAD_##a
#define MX6NAME(a) mx6dl_solo_##a
#else
#define MX6(a) MX6Q_##a
#define MX6PAD(a) MX6Q_PAD_##a
#define MX6NAME(a) mx6q_##a
#endif

#define MX6Q_USDHC_PAD_CTRL_22KPU_40OHM_50MHZ	(PAD_CTL_PKE | PAD_CTL_PUE |	\
		PAD_CTL_PUS_22K_UP  | PAD_CTL_SPEED_LOW |		\
		PAD_CTL_DSE_40ohm   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6Q_USDHC_PAD_CTRL_50MHZ	MX6Q_USDHC_PAD_CTRL
#define MX6Q_PAD_SD3_CLK__USDHC3_CLK	MX6Q_PAD_SD3_CLK__USDHC3_CLK_50MHZ
#define MX6Q_PAD_SD3_CMD__USDHC3_CMD	MX6Q_PAD_SD3_CMD__USDHC3_CMD_50MHZ
#define MX6Q_PAD_SD3_DAT0__USDHC3_DAT0	MX6Q_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ
#define MX6Q_PAD_SD3_DAT1__USDHC3_DAT1	MX6Q_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ
#define MX6Q_PAD_SD3_DAT2__USDHC3_DAT2	MX6Q_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ
#define MX6Q_PAD_SD3_DAT3__USDHC3_DAT3	MX6Q_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ
#define MX6Q_PAD_SD4_CLK__USDHC4_CLK	MX6Q_PAD_SD4_CLK__USDHC4_CLK_50MHZ
#define MX6Q_PAD_SD4_CMD__USDHC4_CMD	MX6Q_PAD_SD4_CMD__USDHC4_CMD_50MHZ
#define MX6Q_PAD_SD4_DAT0__USDHC4_DAT0	MX6Q_PAD_SD4_DAT0__USDHC4_DAT0_50MHZ
#define MX6Q_PAD_SD4_DAT1__USDHC4_DAT1	MX6Q_PAD_SD4_DAT1__USDHC4_DAT1_50MHZ
#define MX6Q_PAD_SD4_DAT2__USDHC4_DAT2	MX6Q_PAD_SD4_DAT2__USDHC4_DAT2_50MHZ
#define MX6Q_PAD_SD4_DAT3__USDHC4_DAT3	MX6Q_PAD_SD4_DAT3__USDHC4_DAT3_50MHZ

#define MX6DL_USDHC_PAD_CTRL_22KPU_40OHM_50MHZ	MX6Q_USDHC_PAD_CTRL_22KPU_40OHM_50MHZ
#define MX6DL_USDHC_PAD_CTRL_50MHZ	MX6DL_USDHC_PAD_CTRL
#define MX6DL_PAD_SD3_CLK__USDHC3_CLK	MX6DL_PAD_SD3_CLK__USDHC3_CLK_50MHZ
#define MX6DL_PAD_SD3_CMD__USDHC3_CMD	MX6DL_PAD_SD3_CMD__USDHC3_CMD_50MHZ
#define MX6DL_PAD_SD3_DAT0__USDHC3_DAT0	MX6DL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ
#define MX6DL_PAD_SD3_DAT1__USDHC3_DAT1	MX6DL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ
#define MX6DL_PAD_SD3_DAT2__USDHC3_DAT2	MX6DL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ
#define MX6DL_PAD_SD3_DAT3__USDHC3_DAT3	MX6DL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ
#define MX6DL_PAD_SD4_CLK__USDHC4_CLK	MX6DL_PAD_SD4_CLK__USDHC4_CLK_50MHZ
#define MX6DL_PAD_SD4_CMD__USDHC4_CMD	MX6DL_PAD_SD4_CMD__USDHC4_CMD_50MHZ
#define MX6DL_PAD_SD4_DAT0__USDHC4_DAT0	MX6DL_PAD_SD4_DAT0__USDHC4_DAT0_50MHZ
#define MX6DL_PAD_SD4_DAT1__USDHC4_DAT1	MX6DL_PAD_SD4_DAT1__USDHC4_DAT1_50MHZ
#define MX6DL_PAD_SD4_DAT2__USDHC4_DAT2	MX6DL_PAD_SD4_DAT2__USDHC4_DAT2_50MHZ
#define MX6DL_PAD_SD4_DAT3__USDHC4_DAT3	MX6DL_PAD_SD4_DAT3__USDHC4_DAT3_50MHZ

#define NP(id, pin, pad_ctl) \
	NEW_PAD_CTRL(MX6PAD(SD##id##_##pin##__USDHC##id##_##pin), MX6(pad_ctl))

#define SD_PINS(id, pad_ctl) \
	NP(id, CLK, pad_ctl),	\
	NP(id, CMD, pad_ctl),	\
	NP(id, DAT0, pad_ctl),	\
	NP(id, DAT1, pad_ctl),	\
	NP(id, DAT2, pad_ctl),	\
	NP(id, DAT3, pad_ctl)

/* Pull/keeper disabled, or with PAD_CTL_PKE to enable */
#define WEAK_PULLUP		(PAD_CTL_HYS | PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_100K_UP | PAD_CTL_SPEED_LOW | PAD_CTL_DSE_40ohm)
#define WEAK (PAD_CTL_PUE | PAD_CTL_PUS_100K_UP | PAD_CTL_DSE_240ohm | PAD_CTL_SPEED_LOW)
#define WEAK_IRQ (WEAK | PAD_CTL_PKE | PAD_CTL_HYS)

#define WEAK_PD (PAD_CTL_PUE | PAD_CTL_PUS_100K_DOWN | PAD_CTL_DSE_240ohm | PAD_CTL_SPEED_LOW)

static iomux_v3_cfg_t MX6NAME(common_pads)[] = {
	/*
	 * Display - LVDS - Backlight
	 * 7 inch and 15.4" at 1280x800
	 */
	NEW_PAD_CTRL(MX6PAD(SD1_CMD__PWM4_PWMO), WEAK),		/* GPIO1[18], J9 pin 10 */

	/* Ethernet - ENET */
	MX6PAD(ENET_MDIO__ENET_MDIO),
	MX6PAD(ENET_MDC__ENET_MDC),
	MX6PAD(RGMII_TXC__ENET_RGMII_TXC),
	MX6PAD(RGMII_TD0__ENET_RGMII_TD0),
	MX6PAD(RGMII_TD1__ENET_RGMII_TD1),
	MX6PAD(RGMII_TD2__ENET_RGMII_TD2),
	MX6PAD(RGMII_TD3__ENET_RGMII_TD3),
	MX6PAD(RGMII_TX_CTL__ENET_RGMII_TX_CTL),
	MX6PAD(ENET_REF_CLK__ENET_TX_CLK),
	MX6PAD(RGMII_RXC__ENET_RGMII_RXC),
	MX6PAD(RGMII_RD0__ENET_RGMII_RD0),
	MX6PAD(RGMII_RD1__ENET_RGMII_RD1),
	MX6PAD(RGMII_RD2__ENET_RGMII_RD2),
	MX6PAD(RGMII_RD3__ENET_RGMII_RD3),
	MX6PAD(RGMII_RX_CTL__ENET_RGMII_RX_CTL),
	NEW_PAD_CTRL(MX6PAD(ENET_RXD0__GPIO_1_27), WEAK),		/* Micrel Phy - Reset */
	NEW_PAD_CTRL(MX6PAD(ENET_TX_EN__GPIO_1_28), WEAK_IRQ),		/* Micrel Phy - Interrupt */

	/*
	 * I2C1, used by RV4162 RTC
	 */
	MX6PAD(EIM_D21__I2C1_SCL),	/* GPIO3[21] */
	MX6PAD(EIM_D28__I2C1_SDA),	/* GPIO3[28] */

	/*
	 * I2C2, buffered to J54 pins 7 and 8
	 */
	MX6PAD(KEY_COL3__I2C2_SCL),	/* GPIO4[12] */
	MX6PAD(KEY_ROW3__I2C2_SDA),	/* GPIO4[13] */

	/*
	 * I2C3, AR1021 touch, external J4 (pin 30 clock, 32 data)
	 */
	MX6PAD(GPIO_5__I2C3_SCL),		/* GPIO1[5] */
	MX6PAD(GPIO_16__I2C3_SDA),		/* GPIO7[11] */
	MX6PAD(SD3_DAT4__GPIO_7_1), 		/* AR1021 4/5 wire select */

	/* PCIE */
	NEW_PAD_CTRL(MX6PAD(EIM_D22__GPIO_3_22), WEAK),		/* Reset - active low */

	/* Real Time Clock-  RTC(I2C1) */
	NEW_PAD_CTRL(MX6PAD(EIM_CS0__GPIO_2_23), WEAK), 	/* RTC_I2C_EN - high active (I2C1) */
	NEW_PAD_CTRL(MX6PAD(EIM_CS1__GPIO_2_24), WEAK_IRQ),	/* RTC_IRQ - low active */

	/* Bottom SD card slot */
	NEW_PAD_CTRL(MX6PAD(SD3_RST__GPIO_7_8), WEAK_IRQ),	/* SD2_CD */
	SD_PINS(2, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),

	/* Storage - SD Card J18 */
	SD_PINS(3, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),
	NEW_PAD_CTRL(MX6PAD(SD3_DAT5__GPIO_7_0), WEAK_IRQ),	/* SD3_CD */

	/* Storage - emmc */
	SD_PINS(4, USDHC_PAD_CTRL_50MHZ),
	NEW_PAD_CTRL(MX6PAD(NANDF_D5__GPIO_2_5), WEAK),		/* EMMC Reset */

	/* Storage - SPI NOR */
	MX6PAD(EIM_D16__ECSPI1_SCLK),
	MX6PAD(EIM_D17__ECSPI1_MISO),
	MX6PAD(EIM_D18__ECSPI1_MOSI),
	NEW_PAD_CTRL(MX6PAD(EIM_D19__GPIO_3_19), WEAK),		/*SS1*/

	/* Touchscreen - AR1021 - I2C3 */
	NEW_PAD_CTRL(MX6PAD(GPIO_9__GPIO_1_9), WEAK_IRQ),	/* interrrupt */

	/* UART2/console */
	MX6PAD(EIM_D26__UART2_TXD),
	MX6PAD(EIM_D27__UART2_RXD),

	/* UART3/RS485 */
	MX6PAD(EIM_RW__GPIO_2_26), 	/* tx enable */
	MX6PAD(EIM_D24__UART3_TXD),
	MX6PAD(EIM_D25__UART3_RXD),

	/* UART4/RS485 */
	MX6PAD(EIM_OE__GPIO_2_25), 	/* tx enable */
	MX6PAD(CSI0_DAT12__UART4_TXD),
	MX6PAD(CSI0_DAT13__UART4_RXD),

	/* UART5/RS485 */
	MX6PAD(EIM_LBA__GPIO_2_27), 	/* tx enable */
	MX6PAD(CSI0_DAT14__UART5_TXD),
	MX6PAD(CSI0_DAT15__UART5_RXD),

	/* USB hub reset */
	NEW_PAD_CTRL(MX6PAD(GPIO_17__GPIO_7_12), WEAK),	/* USB Hub Reset */
	NEW_PAD_CTRL(MX6PAD(EIM_D30__GPIO_3_30), WEAK),	/* USB H1 OC */

	/* USB OTG */
	MX6PAD(GPIO_1__USBOTG_ID),

	NEW_PAD_CTRL(MX6PAD(NANDF_D7__GPIO_2_7), WEAK), /* NC: labelled SD4_WP */

	/*
	 * GPIOs and buttons
	 */
	NEW_PAD_CTRL(MX6PAD(KEY_ROW4__GPIO_4_15), WEAK_PULLUP),	/* J55: Shutdown request */
	NEW_PAD_CTRL(MX6PAD(EIM_A19__GPIO_2_19), WEAK_PULLUP),	/* EIM_A19 - J54 pin 9 */
	NEW_PAD_CTRL(MX6PAD(EIM_A20__GPIO_2_18), WEAK_PULLUP),	/* EIM_A20 - J54 pin 6 */
	NEW_PAD_CTRL(MX6PAD(EIM_A21__GPIO_2_17), WEAK_PULLUP),	/* EIM_A21 - J54 pin 5 */
	NEW_PAD_CTRL(MX6PAD(EIM_A22__GPIO_2_16), WEAK_PULLUP),	/* EIM_A22 - J54 pin 4 */
	NEW_PAD_CTRL(MX6PAD(EIM_A23__GPIO_6_6), WEAK_PULLUP),	/* EIM_A23 - J54 pin 3 */
	NEW_PAD_CTRL(MX6PAD(EIM_A24__GPIO_5_4), WEAK_PULLUP),	/* EIM_A24 - J54 pin 2 */

	/* eMMC pads that aren't configured by U-Boot*/
	MX6PAD(SD4_DAT4__USDHC4_DAT4_200MHZ),
	MX6PAD(SD4_DAT5__USDHC4_DAT5_200MHZ),
	MX6PAD(SD4_DAT6__USDHC4_DAT6_200MHZ),
	MX6PAD(SD4_DAT7__USDHC4_DAT7_200MHZ),
	0
};


#define MX6_USDHC_PAD_SETTING(id, speed, pad_ctl)	\
		MX6NAME(sd##id##_##speed##mhz)[] = { SD_PINS(id, pad_ctl), 0 }

static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 50, USDHC_PAD_CTRL_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 50, USDHC_PAD_CTRL_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(4, 50, USDHC_PAD_CTRL_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(4, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(4, 200, USDHC_PAD_CTRL_200MHZ);

#define _50MHZ 0
#define _100MHZ 1
#define _200MHZ 2
#define SD_SPEED_CNT 3
static iomux_v3_cfg_t *MX6NAME(sd_pads)[] =
{
	MX6NAME(sd2_50mhz),
	MX6NAME(sd2_100mhz),
	MX6NAME(sd2_200mhz),
	MX6NAME(sd3_50mhz),
	MX6NAME(sd3_100mhz),
	MX6NAME(sd3_200mhz),
	MX6NAME(sd4_50mhz),
	MX6NAME(sd4_100mhz),
	MX6NAME(sd4_200mhz),
};
