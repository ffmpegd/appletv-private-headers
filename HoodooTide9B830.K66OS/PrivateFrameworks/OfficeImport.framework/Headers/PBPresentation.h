/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBPresentation : NSObject {
}
+ (void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;	// 0x31300bfd
+ (void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;	// 0x311a74a5
+ (void)readFrom:(PptBinaryReader *)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x3118fa91
+ (id)readFromArchive:(id)archive asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31300991
+ (id)readFromData:(id)data asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x31300995
+ (void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;	// 0x311a2ec1
+ (void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;	// 0x31300999
+ (void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state asThumbnail:(BOOL)thumbnail delegate:(id)delegate;	// 0x311a8cdd
+ (void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;	// 0x311a72f9
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;	// 0x3119e5ed
+ (void)setFontEntites:(id)entites environmentHolder:(id)holder;	// 0x3119e37d
@end
