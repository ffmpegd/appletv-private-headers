/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OAVState, NSMutableDictionary, OAXTableStyleCache, OAXDrawingState, PDPresentation;
@protocol OCCancelDelegate;

@interface PXPresentationState : NSObject {
	NSMutableDictionary *mModelObjects;	// 4 = 0x4
	OAXDrawingState *mOfficeArtState;	// 8 = 0x8
	OAVState *mOAVState;	// 12 = 0xc
	OAXTableStyleCache *mTableStyleCache;	// 16 = 0x10
	NSMutableDictionary *mSlideURLToIndexMap;	// 20 = 0x14
	PDPresentation *mTgtPresentation;	// 24 = 0x18
	id<OCCancelDelegate> mCancel;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x37a01ad9; S=0x379d9f0d; @synthesize=mCancel
@property(retain) id tgtPresentation;	// G=0x379de72d; S=0x379d9f1d; converted property
- (id)init;	// 0x379d9ca1
// declared property getter: - (id)cancelDelegate;	// 0x37a01ad9
- (void)dealloc;	// 0x379e78fd
- (BOOL)isCancelled;	// 0x379db605
- (id)modelObjectForLocation:(id)location;	// 0x379e159d
- (id)oavState;	// 0x37b2d265
- (id)officeArtState;	// 0x379da45d
- (void)resetOfficeArtState;	// 0x379e0bd1
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x379d9f0d
- (void)setModelObject:(id)object forLocation:(id)location;	// 0x379e1281
- (void)setSlideIndex:(int)index forSlideURL:(id)slideURL;	// 0x379da299
// converted property setter: - (void)setTgtPresentation:(id)presentation;	// 0x379d9f1d
- (int)slideIndexForSlideURL:(id)slideURL;	// 0x37a65fdd
- (id)tableStyleCache;	// 0x379da2f9
// converted property getter: - (id)tgtPresentation;	// 0x379de72d
@end
