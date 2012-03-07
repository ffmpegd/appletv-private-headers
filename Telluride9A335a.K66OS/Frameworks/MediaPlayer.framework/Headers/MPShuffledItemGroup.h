/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MPShuffledItemGroup : NSObject <NSCoding> {
	long long _groupPersistentID;	// 4 = 0x4
	NSMutableArray *_mutableItems;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x30187fc5
- (id)initWithGroupPersistentID:(long long)groupPersistentID;	// 0x30187e75
- (void)dealloc;	// 0x30187ef9
- (id)description;	// 0x30187f45
- (void)encodeWithCoder:(id)coder;	// 0x3018807d
@end

