/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MPWeakRef : NSObject {
@private
	id _object;	// 4 = 0x4
	unsigned _objectAddress;	// 8 = 0x8
}
@property(readonly, retain) id object;	// G=0x33c66915; converted property
+ (id)weakRefWithObject:(id)object;	// 0x33c668b5
- (void)dealloc;	// 0x33c6680d
- (unsigned)hash;	// 0x33c66851
- (BOOL)isEqual:(id)equal;	// 0x33c66861
// converted property getter: - (id)object;	// 0x33c66915
@end
