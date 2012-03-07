/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSArray, MCAsset, MCContainerEffect, NSString, NSAttributedString;

@interface MCText : MCObject {
	unsigned mIndex;	// 12 = 0xc
	NSArray *mStringAttributes;	// 16 = 0x10
	MCAsset *mAsset;	// 20 = 0x14
	NSString *mKeyInAsset;	// 24 = 0x18
	MCContainerEffect *mContainer;	// 28 = 0x1c
}
@property(retain, nonatomic) MCAsset *asset;	// G=0x31bb24dd; S=0x31bb25b1; 
@property(copy) NSAttributedString *attributedString;	// G=0x31bb2701; S=0x31bb2711; @dynamic
@property(assign) MCContainerEffect *container;	// G=0x31bb27c5; S=0x31bb27d5; @synthesize=mContainer
@property(assign, nonatomic) unsigned index;	// G=0x31bb276d; S=0x31bb277d; @synthesize=mIndex
@property(copy) NSString *keyInAsset;	// G=0x31bb278d; S=0x31bb27a1; @synthesize=mKeyInAsset
@property(retain) NSArray *stringAttributes;	// G=0x31bb27e5; S=0x31bb27f9; @synthesize=mStringAttributes
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31bb219d
// declared property getter: - (id)asset;	// 0x31bb24dd
// declared property getter: - (id)attributedString;	// 0x31bb2701
- (id)attributedStringWithCTAttributes;	// 0x31bb26d5
// declared property getter: - (id)container;	// 0x31bb27c5
- (void)demolish;	// 0x31bb22e1
- (id)imprint;	// 0x31bb23a1
// declared property getter: - (unsigned)index;	// 0x31bb276d
// declared property getter: - (id)keyInAsset;	// 0x31bb278d
// declared property setter: - (void)setAsset:(id)asset;	// 0x31bb25b1
// declared property setter: - (void)setAttributedString:(id)string;	// 0x31bb2711
// declared property setter: - (void)setContainer:(id)container;	// 0x31bb27d5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x31bb277d
// declared property setter: - (void)setKeyInAsset:(id)asset;	// 0x31bb27a1
// declared property setter: - (void)setStringAttributes:(id)attributes;	// 0x31bb27f9
// declared property getter: - (id)stringAttributes;	// 0x31bb27e5
@end

