/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBDocument : NSObject {
}
+ (id)readFrom:(id)from;	// 0x3111d261
+ (void)readNoteSeparatorFrom:(id)from type:(int)type separator:(id)separator;	// 0x31134add
+ (void)readProperties:(id)properties document:(id)document;	// 0x3111ec5d
+ (void)readSectionsFrom:(id)from document:(id)document;	// 0x3112d8c1
+ (void)readTextBoxesFrom:(id)from;	// 0x31134a29
+ (void)setTimeStamp:(WrdDocumentProperties *)stamp;	// 0x3128d139
+ (unsigned)setupZIndices:(id)indices document:(id)document escherType:(int)type;	// 0x3112abc9
- (id)init;	// 0x3128d0f9
- (id)applicationName;	// 0x3128d12d
@end

