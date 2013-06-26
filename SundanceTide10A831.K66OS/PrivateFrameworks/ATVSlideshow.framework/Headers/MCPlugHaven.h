/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 64 = 0x40
	MCContainerNavigator *mSupercontainer;	// 68 = 0x44
}
@property(retain, nonatomic) MCAction *actionOnCompletion;	// G=0x33a7c349; S=0x33a7c369; 
@property(copy, getter=idInSupercontainer) NSString *idInSupercontainer;	// G=0x33a7c3dd; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x33a7c401; S=0x33a7c415; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33a7c21d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33a7c389
// declared property getter: - (id)actionOnCompletion;	// 0x33a7c349
- (void)demolish;	// 0x33a7c28d
// declared property getter: - (id)idInSupercontainer;	// 0x33a7c3dd
- (id)imprint;	// 0x33a7c2ed
// declared property setter: - (void)setActionOnCompletion:(id)completion;	// 0x33a7c369
- (void)setIDInSupercontainer:(id)supercontainer;	// 0x33a7c3f1
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x33a7c415
// declared property getter: - (id)supercontainer;	// 0x33a7c401
@end
