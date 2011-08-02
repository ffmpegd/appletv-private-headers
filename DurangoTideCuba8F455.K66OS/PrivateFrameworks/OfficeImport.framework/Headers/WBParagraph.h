/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBParagraph : NSObject {
}
+ (int)blockType;	// 0x32d3eb0d
+ (void)check:(id)check forFieldMarkerFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x32bd878d
+ (void)checkForAnnotationBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x32d3eb15
+ (void)checkForAnnotationFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x32d3eb11
+ (void)checkForBookmarkFrom:(id)from runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x32bd8815
+ (void)checkForNoteFrom:(id)from footnote:(BOOL)footnote runEnd:(int *)end readState:(WBParagraphReadState *)state;	// 0x32bd8725
+ (bool)isCPAnnotationRangeEnd:(long)end bookmarkTable:(WrdBookmarkTable *)table;	// 0x32d3eb21
+ (void)readAnnotationBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32d3eb1d
+ (void)readAnnotationFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32d3eb19
+ (void)readBookmarkFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32c20015
+ (void)readCharacterRunsFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32bd847d
+ (void)readFieldMarkerFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32bdb5b9
+ (void)readFrom:(id)from textRun:(WrdParagraphTextRun *)run paragraph:(id)paragraph;	// 0x32bd80b9
+ (void)readNoteFor:(id)aFor from:(id)from readState:(WBParagraphReadState *)state;	// 0x32c210b9
+ (void)readOfficeArtFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x32c1105d
+ (void)readPictureFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x32c1bb99
+ (void)readRunsFor:(id)aFor from:(id)from textRun:(WrdParagraphTextRun *)run;	// 0x32bd8299
+ (void)readSpecialCharacterFor:(id)aFor from:(id)from at:(long)at textRun:(WrdCharacterTextRun *)run;	// 0x32c11e49
+ (void)readSpecialCharactersFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x32c10f9d
+ (void)readSymbolsFor:(id)aFor from:(id)from textRun:(WrdCharacterTextRun *)run;	// 0x32c7b7c9
@end
