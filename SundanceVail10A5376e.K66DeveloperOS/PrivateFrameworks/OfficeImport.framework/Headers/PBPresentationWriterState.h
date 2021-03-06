/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class TSUNoCopyDictionary, NSMutableDictionary, PBOfficeArtWriterState, ESDContainer, ESDObject, ESDRoot, PDPresentation, PDSlideBase;
@protocol OCCancelDelegate;

@interface PBPresentationWriterState : NSObject {
	PBOfficeArtWriterState *mOfficeArtState;	// 4 = 0x4
	PDPresentation *mSrcPresentation;	// 8 = 0x8
	OcSummary *mTgtSummary;	// 12 = 0xc
	ESDRoot *mTgtDocumentRoot;	// 16 = 0x10
	ESDRoot *mTgtPicturesRoot;	// 20 = 0x14
	ESDContainer *mTgtMasterSlideListHolder;	// 24 = 0x18
	ESDContainer *mTgtRegularSlideListHolder;	// 28 = 0x1c
	ESDContainer *mTgtNotesSlideListHolder;	// 32 = 0x20
	CFDictionaryRef mSrcFontNameToTgtFontIndexMap;	// 36 = 0x24
	ESDContainer *mTgtFontCollectionHolder;	// 40 = 0x28
	PptDocumentAtom *mTgtDocumentAtom;	// 44 = 0x2c
	ESDObject *mTgtObjectListAtomHolder;	// 48 = 0x30
	ESDObject *mTgtSoundCollectionAtomHolder;	// 52 = 0x34
	ESDContainer *mTgtBinaryTagData9;	// 56 = 0x38
	NSMutableDictionary *mTgtDocProgTagDatas;	// 60 = 0x3c
	vector<PBWriterMasterStyleInfo, std::allocator<PBWriterMasterStyleInfo> > *mDocMasterStyleInfoVector;	// 64 = 0x40
	PDSlideBase *mCurrentSrcSlideBase;	// 68 = 0x44
	hash_map<PDSlideBase *, PBWriterMasterSlideInfo, PBPointerHash, std::equal_to<PDSlideBase *>, std::allocator<PBWriterMasterSlideInfo> > *mSrcSlideMasterOrLayoutInfoMap;	// 72 = 0x48
	PBWriterMasterSlideInfo *mCurrentMasterSlideInfo;	// 76 = 0x4c
	id<OCCancelDelegate> mCancel;	// 80 = 0x50
	TSUNoCopyDictionary *mTransitionMap;	// 84 = 0x54
	TSUNoCopyDictionary *mEntranceBuildMap;	// 88 = 0x58
	TSUNoCopyDictionary *mExitBuildMap;	// 92 = 0x5c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x371743b9; S=0x371743c9; @synthesize=mCancel
@property(assign) PDSlideBase *currentSourceSlideBase;	// G=0x37173d91; S=0x37173da1; 
@property(retain, nonatomic) TSUNoCopyDictionary *entranceBuildMap;	// G=0x37174379; S=0x37174389; @synthesize=mEntranceBuildMap
@property(retain, nonatomic) TSUNoCopyDictionary *exitBuildMap;	// G=0x37174399; S=0x371743a9; @synthesize=mExitBuildMap
@property(readonly, assign) PBOfficeArtWriterState *officeArtState;	// G=0x371741e5; @synthesize=mOfficeArtState
@property(readonly, assign) PDPresentation *sourcePresentation;	// G=0x3717418d; @synthesize=mSrcPresentation
@property(assign) PptDocumentAtom *targetDocumentAtom;	// G=0x371742a9; S=0x371742bd; @synthesize=mTgtDocumentAtom
@property(retain) ESDRoot *targetDocumentRoot;	// G=0x371741a1; S=0x371741b5; @synthesize=mTgtDocumentRoot
@property(assign) ESDContainer *targetFontCollectionHolder;	// G=0x3717427d; S=0x37174291; @synthesize=mTgtFontCollectionHolder
@property(assign) ESDContainer *targetMasterSlideListHolder;	// G=0x371741f9; S=0x3717420d; @synthesize=mTgtMasterSlideListHolder
@property(assign) ESDContainer *targetNotesSlideListHolder;	// G=0x37174251; S=0x37174265; @synthesize=mTgtNotesSlideListHolder
@property(assign) ESDObject *targetObjectListAtomHolder;	// G=0x371742d5; S=0x371742e9; @synthesize=mTgtObjectListAtomHolder
@property(retain, nonatomic) ESDRoot *targetPicturesRoot;	// G=0x371741c5; S=0x371741d5; @synthesize=mTgtPicturesRoot
@property(assign) ESDContainer *targetRegularSlideListHolder;	// G=0x37174225; S=0x37174239; @synthesize=mTgtRegularSlideListHolder
@property(assign) ESDObject *targetSoundCollectionAtomHolder;	// G=0x37174301; S=0x37174315; @synthesize=mTgtSoundCollectionAtomHolder
@property(assign) OcSummary *targetSummary;	// G=0x3717432d; S=0x37174341; @synthesize=mTgtSummary
@property(retain, nonatomic) TSUNoCopyDictionary *transitionMap;	// G=0x37174359; S=0x37174369; @synthesize=mTransitionMap
- (id)initWithSourcePresentation:(id)sourcePresentation;	// 0x371736a9
// declared property getter: - (id)cancelDelegate;	// 0x371743b9
- (PBWriterMasterSlideInfo *)currentMasterSlideInfo;	// 0x37174141
// declared property getter: - (id)currentSourceSlideBase;	// 0x37173d91
- (void)dealloc;	// 0x371738c5
- (PBWriterMasterStyleInfo *)docTargetMasterStyleInfoOfType:(int)type;	// 0x37174151
// declared property getter: - (id)entranceBuildMap;	// 0x37174379
// declared property getter: - (id)exitBuildMap;	// 0x37174399
- (BOOL)isCancelled;	// 0x37174169
// declared property getter: - (id)officeArtState;	// 0x371741e5
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x371743c9
// declared property setter: - (void)setCurrentSourceSlideBase:(id)base;	// 0x37173da1
// declared property setter: - (void)setEntranceBuildMap:(id)map;	// 0x37174389
// declared property setter: - (void)setExitBuildMap:(id)map;	// 0x371743a9
- (void)setTargetDocProgTagData:(id)data withName:(const unsigned short *)name;	// 0x37173b85
// declared property setter: - (void)setTargetDocumentAtom:(PptDocumentAtom *)atom;	// 0x371742bd
// declared property setter: - (void)setTargetDocumentRoot:(id)root;	// 0x371741b5
// declared property setter: - (void)setTargetFontCollectionHolder:(id)holder;	// 0x37174291
// declared property setter: - (void)setTargetMasterSlideListHolder:(id)holder;	// 0x3717420d
// declared property setter: - (void)setTargetNotesSlideListHolder:(id)holder;	// 0x37174265
// declared property setter: - (void)setTargetObjectListAtomHolder:(id)holder;	// 0x371742e9
// declared property setter: - (void)setTargetPicturesRoot:(id)root;	// 0x371741d5
// declared property setter: - (void)setTargetRegularSlideListHolder:(id)holder;	// 0x37174239
// declared property setter: - (void)setTargetSoundCollectionAtomHolder:(id)holder;	// 0x37174315
// declared property setter: - (void)setTargetSummary:(OcSummary *)summary;	// 0x37174341
// declared property setter: - (void)setTransitionMap:(id)map;	// 0x37174369
// declared property getter: - (id)sourcePresentation;	// 0x3717418d
- (id)targetDocProgTagDataWithName:(const unsigned short *)name;	// 0x37173af9
// declared property getter: - (PptDocumentAtom *)targetDocumentAtom;	// 0x371742a9
// declared property getter: - (id)targetDocumentRoot;	// 0x371741a1
// declared property getter: - (id)targetFontCollectionHolder;	// 0x3717427d
- (unsigned short)targetIndexForSourceFontName:(id)sourceFontName;	// 0x37173c0d
// declared property getter: - (id)targetMasterSlideListHolder;	// 0x371741f9
// declared property getter: - (id)targetNotesSlideListHolder;	// 0x37174251
// declared property getter: - (id)targetObjectListAtomHolder;	// 0x371742d5
- (id)targetOutlineTextFormatContainerWithProgTagName:(const unsigned short *)progTagName;	// 0x37173bb9
// declared property getter: - (id)targetPicturesRoot;	// 0x371741c5
// declared property getter: - (id)targetRegularSlideListHolder;	// 0x37174225
// declared property getter: - (id)targetSoundCollectionAtomHolder;	// 0x37174301
// declared property getter: - (OcSummary *)targetSummary;	// 0x3717432d
// declared property getter: - (id)transitionMap;	// 0x37174359
@end

