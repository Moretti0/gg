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
#define WEAK (PAD_CTL_PUE | PAD_CTL_PUS_100K_UP | PAD_CTL_DSE_240ohm | PAD_CTL_SPEED_LOW)
#define WEAK_IRQ (WEAK | PAD_CTL_PKE | PAD_CTL_HYS)

#define WEAK_PD (PAD_CTL_PUE | PAD_CTL_PUS_100K_DOWN | PAD_CTL_DSE_240ohm | PAD_CTL_SPEED_LOW)

static iomux_v3_cfg_t MX6NAME(common_pads)[] = {
	/* Audio - SGTL5000 I2C1 */
	MX6PAD(CSI0_DAT4__AUDMUX_AUD3_TXC),
	MX6PAD(CSI0_DAT5__AUDMUX_AUD3_TXD),
	MX6PAD(CSI0_DAT6__AUDMUX_AUD3_TXFS),
	MX6PAD(CSI0_DAT7__AUDMUX_AUD3_RXD),
	MX6PAD(GPIO_0__CCM_CLKO),		/* SGTL5000 sys_mclk */
	NEW_PAD_CTRL(MX6PAD(EIM_A25__GPIO_5_2), WEAK), /* BMUTE active low */

	/* Camera - IPU1 (i2c1)*/
	MX6PAD(CSI0_DAT8__IPU1_CSI0_D_8),
	MX6PAD(CSI0_DAT9__IPU1_CSI0_D_9),
	MX6PAD(CSI0_DAT10__IPU1_CSI0_D_10),
	MX6PAD(CSI0_DAT11__IPU1_CSI0_D_11),
	MX6PAD(CSI0_DAT12__IPU1_CSI0_D_12),
	MX6PAD(CSI0_DAT13__IPU1_CSI0_D_13),
	MX6PAD(CSI0_DAT14__IPU1_CSI0_D_14),
	MX6PAD(CSI0_DAT15__IPU1_CSI0_D_15),
	MX6PAD(CSI0_DAT16__IPU1_CSI0_D_16),
	MX6PAD(CSI0_DAT17__IPU1_CSI0_D_17),
	MX6PAD(CSI0_DAT18__IPU1_CSI0_D_18),
	MX6PAD(CSI0_DAT19__IPU1_CSI0_D_19),
	MX6PAD(CSI0_DATA_EN__IPU1_CSI0_DATA_EN),
	MX6PAD(CSI0_MCLK__IPU1_CSI0_HSYNC),
	MX6PAD(CSI0_VSYNC__IPU1_CSI0_VSYNC),
	MX6PAD(CSI0_PIXCLK__IPU1_CSI0_PIXCLK),
	MX6PAD(GPIO_3__CCM_CLKO2),		/* Camera xCLK */
	NEW_PAD_CTRL(MX6PAD(EIM_D20__GPIO_3_20), WEAK),	/* i2c enable (i2c1) - active high */
	NEW_PAD_CTRL(MX6PAD(SD1_DAT0__GPIO_1_16), WEAK), /* pin 1 */
	NEW_PAD_CTRL(MX6PAD(GPIO_6__GPIO_1_6), WEAK),	/* pin 2 */
	NEW_PAD_CTRL(MX6PAD(GPIO_8__GPIO_1_8), WEAK),	/* Camera Reset, pin 8 */

	/* Display - HDMI EDID(I2C3) */
	NEW_PAD_CTRL(MX6PAD(EIM_A21__GPIO_2_17), WEAK),	/* i2c enable (I2C3) */

	/*
	 * Display - LVDS - Backlight
	 * 6.5 inch is VGA 640x480,
	 * 10.4 is 1024x768
	 */
	NEW_PAD_CTRL(MX6PAD(SD1_CMD__PWM4_PWMO), WEAK),		/* GPIO1[18], J9 pin 10 */
	NEW_PAD_CTRL(MX6PAD(SD1_DAT1__GPIO_1_17), WEAK),	/* J9 pin 9, also pwm3 */

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
	 * I2C1, used by
	 * SGTL5000
	 * Camera - thru buffer
	 * RTC - thru buffer
	 */
	MX6PAD(EIM_D21__I2C1_SCL),	/* GPIO3[21] */
	MX6PAD(EIM_D28__I2C1_SDA),	/* GPIO3[28] */

	/*
	 * I2C3, used by -
	 * TSC2004
	 * J7 i2c connector
	 *    pin 4 - interrupt - GPIO_9 (same as for tsc2004)
	 *    pin 5 - sda
	 *    pin 6 - scl
	 *
	 * PCIE connector
	 * EDID - thru buffer
	 */
	MX6PAD(GPIO_5__I2C3_SCL),	/* GPIO1[5] */
	MX6PAD(GPIO_16__I2C3_SDA),	/* GPIO7[11] */

	/* Keypad */
	MX6PAD(KEY_COL0__KPP_COL_0),
	MX6PAD(KEY_COL1__KPP_COL_1),
	MX6PAD(KEY_COL2__KPP_COL_2),
	MX6PAD(KEY_ROW0__KPP_ROW_0),
	MX6PAD(KEY_ROW1__KPP_ROW_1),
	MX6PAD(KEY_ROW2__KPP_ROW_2),
	MX6PAD(KEY_ROW3__KPP_ROW_3),
	MX6PAD(KEY_ROW4__KPP_ROW_4),
	MX6PAD(GPIO_2__KPP_ROW_6),

	/* PCIE */
	NEW_PAD_CTRL(MX6PAD(EIM_D22__GPIO_3_22), WEAK),		/* Reset - active low */

	/* Real Time Clock-  RTC(I2C1) */
	NEW_PAD_CTRL(MX6PAD(EIM_CS0__GPIO_2_23), WEAK), 	/* RTC_I2C_EN - high active (I2C1) */
	NEW_PAD_CTRL(MX6PAD(EIM_CS1__GPIO_2_24), WEAK_IRQ),	/* RTC_IRQ - low active */

	/* Storage - emmc */
	SD_PINS(4, USDHC_PAD_CTRL_50MHZ),
	NEW_PAD_CTRL(MX6PAD(NANDF_D5__GPIO_2_5), WEAK),		/* EMMC Reset */

	/* Storage - SD Card J18 */
	SD_PINS(3, USDHC_PAD_CTRL_50MHZ),
	NEW_PAD_CTRL(MX6PAD(SD3_DAT5__GPIO_7_0), WEAK_IRQ),	/* SD3_CD */

	/* Storage - SPI NOR */
	MX6PAD(EIM_D16__ECSPI1_SCLK),
	MX6PAD(EIM_D17__ECSPI1_MISO),
	MX6PAD(EIM_D18__ECSPI1_MOSI),
	NEW_PAD_CTRL(MX6PAD(EIM_D19__GPIO_3_19), WEAK),		/*SS1*/

	/* Touchscreen - tsc2004 - I2C3 */
	NEW_PAD_CTRL(MX6PAD(GPIO_4__GPIO_1_4), WEAK),		/* Reset - active low */
	NEW_PAD_CTRL(MX6PAD(GPIO_9__GPIO_1_9), WEAK_IRQ),	/* interrrupt */

	/* UART1  */
	MX6PAD(SD3_DAT6__UART1_RXD),
	MX6PAD(SD3_DAT7__UART1_TXD),

	/* UART2/console */
	MX6PAD(EIM_D27__UART2_RXD),
	MX6PAD(EIM_D26__UART2_TXD),

	/* USB hub reset */
	NEW_PAD_CTRL(MX6PAD(GPIO_17__GPIO_7_12), WEAK),		/* USB Hub Reset */

	/* Wireless - bluetooth - Broadcom */
	MX6PAD(EIM_D23__UART3_CTS),
	MX6PAD(EIM_D31__UART3_RTS),
	MX6PAD(EIM_D25__UART3_RXD),
	MX6PAD(EIM_D24__UART3_TXD),
        MX6PAD(SD1_CLK__OSC32K_32K_OUT),	/* slow clock */
	NEW_PAD_CTRL(MX6PAD(NANDF_ALE__GPIO_6_8), WEAK),	/* BT_RESET */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS2__GPIO_6_15), WEAK),	/* BT_REG_EN */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS3__GPIO_6_16), WEAK_IRQ),	/* BT_WAKE_IRQ */

	/* Wireless - WiFi - Broadcom */
	SD_PINS(2, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),
	NEW_PAD_CTRL(MX6PAD(NANDF_CLE__GPIO_6_7), WEAK),	/* WL_EN */
	NEW_PAD_CTRL(MX6PAD(NANDF_WP_B__GPIO_6_9), WEAK_PD),	/* CLK_REQ_IRQ */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS1__GPIO_6_14), WEAK_IRQ),	/* WL_WAKE_IRQ */
	NEW_PAD_CTRL(MX6PAD(NANDF_D0__GPIO_2_0), WEAK),	/* Reserved */
	NEW_PAD_CTRL(MX6PAD(NANDF_D1__GPIO_2_1), WEAK),	/* Reserved */
	NEW_PAD_CTRL(MX6PAD(NANDF_D2__GPIO_2_2), WEAK),	/* Reserved */
	NEW_PAD_CTRL(MX6PAD(NANDF_D3__GPIO_2_3), WEAK),	/* Reserved */
	NEW_PAD_CTRL(MX6PAD(NANDF_D4__GPIO_2_4), WEAK),	/* Reserved */

	/* 12v supply enable  */
	NEW_PAD_CTRL(MX6PAD(GPIO_19__GPIO_4_5), WEAK),	/* high active */

	/* Reserved - jumper pins */
	NEW_PAD_CTRL(MX6PAD(EIM_D30__GPIO_3_30), WEAK),
//	NEW_PAD_CTRL(MX6PAD(GPIO_1__GPIO_1_1), WEAK),	/* can be USBOTG_ID */
	MX6PAD(GPIO_1__USBOTG_ID),
	NEW_PAD_CTRL(MX6PAD(SD3_DAT4__GPIO_7_1), WEAK),

	/* SDHC2 (WiFi) */
	/* USDHC2 */
	MX6PAD(SD2_CLK__USDHC2_CLK),
	MX6PAD(SD2_CMD__USDHC2_CMD),
	MX6PAD(SD2_DAT0__USDHC2_DAT0),
	MX6PAD(SD2_DAT1__USDHC2_DAT1),
	MX6PAD(SD2_DAT2__USDHC2_DAT2),
	MX6PAD(SD2_DAT3__USDHC2_DAT3),

	/* eMMC pads that aren't configured by U-Boot*/
	MX6PAD(SD4_DAT4__USDHC4_DAT4_200MHZ),
	MX6PAD(SD4_DAT5__USDHC4_DAT5_200MHZ),
	MX6PAD(SD4_DAT6__USDHC4_DAT6_200MHZ),
	MX6PAD(SD4_DAT7__USDHC4_DAT7_200MHZ),
	0
};


#define MX6_USDHC_PAD_SETTING(id, speed, pad_ctl)	\
		MX6NAME(sd##id##_##speed##mhz)[] = { SD_PINS(id, pad_ctl), 0 }

static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 50, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ);
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
static iomux_v3_cfg_t * MX6NAME(sd_pads)[] =
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
