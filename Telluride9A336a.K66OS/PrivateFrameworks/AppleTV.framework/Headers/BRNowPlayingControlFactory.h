/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface BRNowPlayingControlFactory : NSObject <BRControlFactory> {
}
+ (void)_nowPlayingSelected;	// 0x33a6d041
+ (id)factory;	// 0x33a6cb01
- (id)_nowPlayingListItemForData:(id)data currentControl:(id)control;	// 0x33a6ccfd
- (id)_nowPlayingPosterItemForData:(id)data currentControl:(id)control;	// 0x33a6cdb5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33a6cb49
@end

