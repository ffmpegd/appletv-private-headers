/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface WBTable : NSObject {
}
+ (void)initPropertiesFrom:(id)from to:(id)to in:(id)anIn;	// 0x3494d46d
+ (BOOL)isTableFloating:(const WrdTableProperties *)floating tracked:(const WrdTableProperties *)tracked;	// 0x3494f441
+ (void)readFrom:(id)from textRuns:(id)runs table:(id)table;	// 0x3494d26d
+ (void)readRowFrom:(id)from textRuns:(id)runs to:(id)to;	// 0x3494dba5
+ (BOOL)tryToReadRowFrom:(id)from textRuns:(id)runs to:(id)to;	// 0x3494efb5
+ (void)writeCharacterProperties:(id)properties to:(id)to;	// 0x34a8ec21
+ (void)writeParagraphProperties:(id)properties to:(id)to;	// 0x34a8eb55
+ (void)writeText:(id)text to:(id)to;	// 0x34a8eacd
@end
