/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXText : NSObject {
}
+ (id)addNewSectionTo:(id)to state:(id)state;	// 0x352be051
+ (void)createChildren:(xmlNode *)children baseStyle:(id)style to:(id)to state:(id)state;	// 0x352b6c89
+ (void)createChildrenFromStream:(xmlTextReader *)stream baseStyle:(id)style to:(id)to state:(id)state;	// 0x352b754d
+ (void)readFrom:(xmlNode *)from baseStyle:(id)style to:(id)to state:(id)state;	// 0x352b6c69
+ (void)readFrom:(xmlNode *)from state:(id)state;	// 0x353ac425
+ (void)readFromParagraph:(xmlNode *)paragraph baseStyle:(id)style to:(id)to state:(id)state;	// 0x352b7d41
+ (void)readFromStream:(xmlTextReader *)stream baseStyle:(id)style to:(id)to state:(id)state;	// 0x352b752d
+ (void)readFromStream:(xmlTextReader *)stream state:(id)state;	// 0x352b74a1
+ (void)readFromString:(id)string to:(id)to;	// 0x353ac4b1
+ (void)readFromTable:(xmlNode *)table baseStyle:(id)style to:(id)to state:(id)state;	// 0x352be221
+ (void)updateTextBoxIdsFromState:(id)state;	// 0x352c5c01
@end

