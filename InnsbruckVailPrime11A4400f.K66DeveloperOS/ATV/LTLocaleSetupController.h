/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRTextWithSpinnerController;

__attribute__((visibility("hidden")))
@interface LTLocaleSetupController : XXUnknownSuperclass {
	BRTextWithSpinnerController *_spinner;	// 4 = 0x4
	BOOL _tryingToAutoset;	// 8 = 0x8
}
- (id)init;	// 0x497249
- (void).cxx_destruct;	// 0x4977d5
- (void)_checkStoreFrontAndRemoveSpinner;	// 0x497671
- (void)_removeSpinner;	// 0x497389
- (void)_setCountry:(id)country;	// 0x4973dd
- (void)_storeChangedTimeout:(id)timeout;	// 0x497755
- (void)_storeLocationChanged:(id)changed;	// 0x497765
- (id)autoPoppingSpinner;	// 0x49765d
- (void)autosetLocale;	// 0x49744d
- (void)dealloc;	// 0x497309
@end
