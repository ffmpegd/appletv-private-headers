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
@property(assign, nonatomic) BOOL imagesFetched;	// G=0x33cab07d; S=0x33cab08d; @synthesize
@property(assign, nonatomic) BOOL sizesFetched;	// G=0x33cab09d; S=0x33cab0ad; @synthesize
- (id)init;	// 0x33caae65
- (id)_pairForKey:(id)key create:(BOOL)create;	// 0x33caaf15
- (void)dealloc;	// 0x33caaec9
- (id)imageForKey:(id)key;	// 0x33cab011
// declared property getter: - (BOOL)imagesFetched;	// 0x33cab07d
- (void)setImage:(id)image forKey:(id)key;	// 0x33caafad
// declared property setter: - (void)setImagesFetched:(BOOL)fetched;	// 0x33cab08d
- (void)setSize:(CGSize)size forKey:(id)key;	// 0x33caafdd
// declared property setter: - (void)setSizesFetched:(BOOL)fetched;	// 0x33cab0ad
- (CGSize)sizeForKey:(id)key;	// 0x33cab03d
// declared property getter: - (BOOL)sizesFetched;	// 0x33cab09d
@end

