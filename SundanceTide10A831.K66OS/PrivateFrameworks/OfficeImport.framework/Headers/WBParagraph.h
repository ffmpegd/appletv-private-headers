/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBParagraph : NSObject {
}
+ (int)blockType;	// 0x36c55139
+ (void)check:(id)check forFieldMarkerFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x36af70f5
+ (void)checkForAnnotationBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x36af702d
+ (void)checkForAnnotationFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x36af6f5d
+ (void)checkForBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x36af717d
+ (void)checkForNoteFrom:(id)from footnote:(BOOL)footnote runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x36af6ee9
+ (bool)isCPAnnotationRangeEnd:(long)end bookmarkTable:(WrdBookmarkTable *)table;	// 0x36c5513d
+ (void)prepareFieldMarkersForWriting:(id)writing with:(id)with;	// 0x36c5526d
+ (void)readAnnotationBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36c551a9
+ (void)readAnnotationFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36c5516d
+ (void)readBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36b13265
+ (void)readCharacterRunsFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36af6b95
+ (void)readFieldMarkerFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36af9b9d
+ (void)readFrom:(id)from textRun:(WrdParagraphTextRun *)run paragraph:(id)paragraph;	// 0x36af66c5
+ (void)readNoteFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x36b58c05
+ (void)readOfficeArtFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x36af848d
+ (void)readPictureFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x36af9e65
+ (void)readRunsFor:(id)aFor from:(id)from textRun:(WrdParagraphTextRun *)run;	// 0x36af68f9
+ (void)readSpecialCharacterFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x36b59175
+ (void)readSpecialCharactersFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x36af8195
+ (void)readSymbolsFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x36b0c8d9
@end

