/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUPoolObject.h"
#import "ATVSlideshow-Structs.h"

@class MRImage, NSString;

@interface MRPictureFrameRenderable : MUPoolObject {
	MRImage *image;	// 8 = 0x8
	CGRect rect;	// 12 = 0xc
	CGRect innerRect;	// 28 = 0x1c
	CGRect outerRect;	// 44 = 0x2c
	NSString *where;	// 60 = 0x3c
	BOOL ignoreBlend;	// 64 = 0x40
	MRPictureFrameRenderable *next;	// 68 = 0x44
}
@property(retain, nonatomic) MRImage *image;	// G=0x321ec6a5; S=0x321ec6b5; @synthesize
@property(copy, nonatomic) NSString *where;	// G=0x321ec6d9; S=0x321ec6e9; @synthesize
+ (XXStruct_01lTDD *)poolInfo;	// 0x321ec5f5
- (void)dealloc;	// 0x321ec665
// declared property getter: - (id)image;	// 0x321ec6a5
- (void)purge;	// 0x321ec605
// declared property setter: - (void)setImage:(id)image;	// 0x321ec6b5
// declared property setter: - (void)setWhere:(id)where;	// 0x321ec6e9
// declared property getter: - (id)where;	// 0x321ec6d9
@end

