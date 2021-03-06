/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBParagraphProperties : NSObject {
}
+ (WrdParagraphProperties *)createTrackedPropertiesIfNeeded:(id)needed;	// 0x33be0501
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x33be0461
+ (void)mapProperties:(id)properties writer:(id)writer toWordProperties:(WrdParagraphProperties *)wordProperties;	// 0x33be0585
+ (void)mapWordProperties:(WrdParagraphProperties *)properties reader:(id)reader toProperties:(id)properties3;	// 0x33a78345
+ (void)readFrom:(id)from wrdProperties:(WrdParagraphProperties *)properties tracked:(WrdParagraphProperties *)tracked document:(id)document properties:(id)properties5;	// 0x33a782c1
+ (void)write:(id)write properties:(id)properties wrdProperties:(WrdParagraphProperties *)properties3 tracked:(WrdParagraphProperties *)tracked document:(id)document;	// 0x33be047d
@end

