/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramPointMapper.h"


@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
	BOOL mPlaceholder;	// 24 = 0x18
	BOOL mHomePlate;	// 25 = 0x19
}
- (void)mapAt:(id)at withState:(id)state;	// 0x34ba0a91
- (void)setIsHomePlate:(BOOL)plate;	// 0x34ba0a81
- (void)setIsPlaceholder:(BOOL)placeholder;	// 0x34bb7da5
@end

