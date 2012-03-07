/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"

@class BRMediaHost;

__attribute__((visibility("hidden")))
@interface BRMediaHostDisconnectedDialog : BROptionDialog {
@private
	BRMediaHost *_mediaHost;	// 148 = 0x94
	unsigned _timerSatisfied : 1;	// 152 = 0x98
}
@property(retain) BRMediaHost *mediaHost;	// G=0x3327898d; S=0x3327894d; converted property
- (id)initWithHost:(id)host;	// 0x332786d5
- (void)_checkHostStatus:(id)status;	// 0x33278a11
- (void)dealloc;	// 0x33278869
- (void)goToSources;	// 0x332788b5
// converted property getter: - (id)mediaHost;	// 0x3327898d
// converted property setter: - (void)setMediaHost:(id)host;	// 0x3327894d
- (void)wasPushed;	// 0x3327899d
@end

