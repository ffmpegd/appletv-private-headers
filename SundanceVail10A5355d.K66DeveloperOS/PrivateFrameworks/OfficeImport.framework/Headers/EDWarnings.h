/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EDWarnings : NSObject {
	CFArrayRef mWarnings;	// 4 = 0x4
}
- (id)init;	// 0x31c15bed
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x31d25685
- (void)dealloc;	// 0x31c445c5
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x31db1739
@end

