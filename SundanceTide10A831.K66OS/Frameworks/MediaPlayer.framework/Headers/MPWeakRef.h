/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPWeakRef : NSObject {
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(readonly, retain) id object;	// G=0x36f758a1; converted property
+ (id)weakRefWithObject:(id)object;	// 0x36f75841
- (void)dealloc;	// 0x36f75799
- (unsigned)hash;	// 0x36f757dd
- (BOOL)isEqual:(id)equal;	// 0x36f757ed
// converted property getter: - (id)object;	// 0x36f758a1
@end

