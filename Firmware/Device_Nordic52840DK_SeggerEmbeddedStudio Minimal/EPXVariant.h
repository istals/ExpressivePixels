#pragma once


enum VariantCapabilities
{
	VARIANTCAPABILITY_STORAGE = 0x1,
	VARIANTCAPABILITY_PREVIEW = 0x2,
};


#if defined(ADACPXBLUEFRUIT)
#define GPIO_PIN_BOOSTER_ENABLE 0
#define DISPLAYARRAY_DATAPIN	3
#define DISPLAYARRAY_POWERPIN   0

#endif

extern char g_szDEFAULT_BLE_NAME[];