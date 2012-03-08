/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchAgent.h"

@class ATVTimeZoneChooserController;

@interface ATVTimeZoneSearchAgent : ATVSearchAgent {
@private
	ATVTimeZoneChooserController *_controller;	// 12 = 0xc
}
+ (id)agentForController:(id)controller;	// 0x3020ce69
- (id)initWithController:(id)controller;	// 0x3020ceb5
- (long)cacheSize;	// 0x3020d051
- (void)dealloc;	// 0x3020cefd
- (BOOL)handlePlayForObject:(id)object;	// 0x3020d059
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x3020cf3d
- (BOOL)showRecentSearches;	// 0x3020d055
@end
