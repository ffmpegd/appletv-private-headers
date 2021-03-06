/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBParagraph : NSObject {
}
+ (int)blockType;	// 0x3128f149
+ (void)check:(id)check forFieldMarkerFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x3113178d
+ (void)checkForAnnotationBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x311316c5
+ (void)checkForAnnotationFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x311315f5
+ (void)checkForBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x31131815
+ (void)checkForNoteFrom:(id)from footnote:(BOOL)footnote runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x31131581
+ (bool)isCPAnnotationRangeEnd:(long)end bookmarkTable:(WrdBookmarkTable *)table;	// 0x3128f14d
+ (void)prepareFieldMarkersForWriting:(id)writing with:(id)with;	// 0x3128f27d
+ (void)readAnnotationBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x3128f1b9
+ (void)readAnnotationFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x3128f17d
+ (void)readBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x3114d8fd
+ (void)readCharacterRunsFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x3113122d
+ (void)readFieldMarkerFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x31134235
+ (void)readFrom:(id)from textRun:(WrdParagraphTextRun *)run paragraph:(id)paragraph;	// 0x31130d5d
+ (void)readNoteFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x311932c5
+ (void)readOfficeArtFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x31132b25
+ (void)readPictureFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x311344fd
+ (void)readRunsFor:(id)aFor from:(id)from textRun:(WrdParagraphTextRun *)run;	// 0x31130f91
+ (void)readSpecialCharacterFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x31193835
+ (void)readSpecialCharactersFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x3113282d
+ (void)readSymbolsFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x31146f71
@end

