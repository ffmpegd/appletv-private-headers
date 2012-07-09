/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBSection : NSObject {
}
+ (void)mapPrinterSettings:(WrdSectionProperties *)settings toSection:(id)section;	// 0x33a84b49
+ (void)mapSection:(id)section toSectionProperties:(WrdSectionProperties *)sectionProperties;	// 0x33be170d
+ (void)mapSectionProperties:(WrdSectionProperties *)properties toSection:(id)section;	// 0x33a84c19
+ (void)readFrom:(id)from textRun:(WrdSectionTextRun *)run document:(id)document index:(int)index section:(id)section;	// 0x33a80039
+ (void)readHeaderFrom:(id)from type:(int)type index:(int)index header:(id)header;	// 0x33a84aa1
+ (void)writeSectionProperties:(id)properties to:(id)to;	// 0x33be14cd
@end
