/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVScreenSaverPluginProtocol.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface ATVBlackScreenSaver : XXUnknownSuperclass <ATVScreenSaverPluginProtocol> {
	BRControl *_blackShroudOfDeath;	// 4 = 0x4
}
- (id)init;	// 0x21cce5
- (void)dealloc;	// 0x21cd99
- (id)screenSaverControl;	// 0x21cde5
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x21cdf5
- (BOOL)usesVideoPlayback;	// 0x21cdf9
@end

