/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBCharacterProperties : NSObject {
}
+ (WrdCharacterProperties *)createTrackedPropertiesIfNeeded:(id)needed;	// 0x3128cb71
+ (id)formattingChangeDate:(const WrdDateTime *)date;	// 0x3128beb9
+ (void)prepareForWriting:(id)writing properties:(id)properties wrdProperties:(WrdCharacterProperties *)properties3 tracked:(WrdCharacterProperties *)tracked;	// 0x3128bed5
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties document:(id)document properties:(id)properties4;	// 0x31127c05
+ (void)readFrom:(id)from wrdProperties:(WrdCharacterProperties *)properties tracked:(WrdCharacterProperties *)tracked document:(id)document properties:(id)properties5;	// 0x31127b79
+ (void)write:(id)write properties:(id)properties wrdProperties:(WrdCharacterProperties *)properties3 document:(id)document;	// 0x3128bf85
@end

