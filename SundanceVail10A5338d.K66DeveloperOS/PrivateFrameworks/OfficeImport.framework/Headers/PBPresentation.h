/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBPresentation : NSObject {
}
+ (void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;	// 0x33bca469
+ (void)finalizeWritingGlobalsWithPresentationState:(id)presentationState;	// 0x33bcb43d
+ (void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;	// 0x339c57f1
+ (void)readFrom:(PptBinaryReader *)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3395945d
+ (void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;	// 0x339711cd
+ (void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;	// 0x33bcb6a5
+ (void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state isThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x339c7411
+ (void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;	// 0x339c5135
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;	// 0x33968259
+ (void)setFontEntites:(id)entites environmentHolder:(id)holder;	// 0x33967f65
+ (void)writeGlobalsWithPresentationState:(id)presentationState;	// 0x33bca581
+ (void)writeNotesMasterWithPresentationState:(id)presentationState;	// 0x33bcb441
+ (void)writeSlideMastersWithPresentationState:(id)presentationState;	// 0x33bcb4ad
+ (void)writeSlidesWithPresentationState:(id)presentationState;	// 0x33bcb599
@end
