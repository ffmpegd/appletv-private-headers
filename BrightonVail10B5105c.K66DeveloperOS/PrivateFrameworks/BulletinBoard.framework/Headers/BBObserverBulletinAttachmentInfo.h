/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSMutableDictionary;

@interface BBObserverBulletinAttachmentInfo : NSObject {
	NSMutableDictionary *_imageSizePairs;	// 4 = 0x4
	BOOL imagesFetched;	// 8 = 0x8
	BOOL sizesFetched;	// 9 = 0x9
}
@property(assign, nonatomic) BOOL imagesFetched;	// G=0x370c70bd; S=0x370c70cd; @synthesize
@property(assign, nonatomic) BOOL sizesFetched;	// G=0x370c70dd; S=0x370c70ed; @synthesize
- (id)init;	// 0x370c6ea5
- (id)_pairForKey:(id)key create:(BOOL)create;	// 0x370c6f55
- (void)dealloc;	// 0x370c6f09
- (id)imageForKey:(id)key;	// 0x370c7051
// declared property getter: - (BOOL)imagesFetched;	// 0x370c70bd
- (void)setImage:(id)image forKey:(id)key;	// 0x370c6fed
// declared property setter: - (void)setImagesFetched:(BOOL)fetched;	// 0x370c70cd
- (void)setSize:(CGSize)size forKey:(id)key;	// 0x370c701d
// declared property setter: - (void)setSizesFetched:(BOOL)fetched;	// 0x370c70ed
- (CGSize)sizeForKey:(id)key;	// 0x370c707d
// declared property getter: - (BOOL)sizesFetched;	// 0x370c70dd
@end
