/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSString *mPath;	// 12 = 0xc
	NSMutableSet *mTexts;	// 16 = 0x10
}
@property(readonly, assign) BOOL isInUse;	// G=0x343b29c1; 
@property(copy) NSString *path;	// G=0x343b2a75; S=0x343b2a89; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x343b289d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x343b2a31
- (void)demolish;	// 0x343b290d
- (void)forgetText:(id)text;	// 0x343b2a11
- (id)imprint;	// 0x343b2961
// declared property getter: - (BOOL)isInUse;	// 0x343b29c1
- (void)learnText:(id)text;	// 0x343b29f1
// declared property getter: - (id)path;	// 0x343b2a75
// declared property setter: - (void)setPath:(id)path;	// 0x343b2a89
@end

