/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "AppleTVServices-Structs.h"
#import </libobjc.A.h>


@interface ATVXMLSchema : NSObject {
	xmlSchema *_schema;	// 4 = 0x4
}
@property(assign, nonatomic) xmlSchema *schema;	// G=0x30465155; S=0x30465165; @synthesize=_schema
- (id)initWithSchemaData:(id)schemaData;	// 0x30464635
- (BOOL)_validateWithError:(id *)error withBlock:(id)block;	// 0x30464c15
- (void)dealloc;	// 0x30464b75
// declared property getter: - (xmlSchema *)schema;	// 0x30465155
// declared property setter: - (void)setSchema:(xmlSchema *)schema;	// 0x30465165
- (BOOL)validateDocument:(id)document error:(id *)error;	// 0x30464ddd
- (BOOL)validateElement:(id)element error:(id *)error;	// 0x30464f99
@end

