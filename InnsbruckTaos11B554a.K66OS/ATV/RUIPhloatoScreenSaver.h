/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVScreenSaverPluginProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class RUIPhloatoControl;

__attribute__((visibility("hidden")))
@interface RUIPhloatoScreenSaver : XXUnknownSuperclass <ATVScreenSaverPluginProtocol> {
	RUIPhloatoControl *_control;	// 4 = 0x4
}
- (id)init;	// 0x4b4fe9
- (void).cxx_destruct;	// 0x4b5105
- (id)screenSaverControl;	// 0x4b50c9
- (void)setProvider:(id)provider;	// 0x4b50e1
- (void)setScreenSaverAutoFired:(BOOL)fired;	// 0x4b50dd
- (BOOL)usesVideoPlayback;	// 0x4b5101
@end

