/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXAlignmentInfo : NSObject {
}
+ (id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode *)vmlAlignmentInfoElement state:(id)state;	// 0x36b875fd
+ (id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode *)xmlAlignmentInfoElement state:(id)state;	// 0x36ad3ba5
+ (int)edHorizontalAlignFromHorizontalAlignString:(id)horizontalAlignString;	// 0x36ad3de9
+ (int)edVerticalAlignFromVerticalAlignString:(id)verticalAlignString;	// 0x36ad3d4d
@end
