/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTableRow : NSObject {
}
+ (void)collectCellProperties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked for:(id)aFor;	// 0x31e14359
+ (void)readCellsFrom:(id)from textRuns:(id)runs level:(int)level to:(id)to properties:(WrdTableProperties *)properties tracked:(WrdTableProperties *)tracked;	// 0x31cd1145
+ (void)readFrom:(id)from textRuns:(id)runs to:(id)to index:(int)index row:(id)row;	// 0x31cd0bc5
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x31e141c5
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x31e13cf9
+ (void)writeText:(id)text to:(id)to;	// 0x31e13c01
@end
