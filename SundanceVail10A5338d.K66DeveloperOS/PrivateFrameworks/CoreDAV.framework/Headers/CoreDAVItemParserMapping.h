/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CoreDAVItemParserMapping : NSObject {
	NSString *_nameSpace;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	Class _parseClass;	// 12 = 0xc
}
@property(retain) NSString *name;	// G=0x34c2aa19; S=0x34c2aa2d; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x34c2a9f5; S=0x34c2aa09; @synthesize=_nameSpace
@property(assign) Class parseClass;	// G=0x34c2aa3d; S=0x34c2aa51; @synthesize=_parseClass
- (id)initWithNameSpace:(id)nameSpace name:(id)name parseClass:(Class)aClass;	// 0x34c2a85d
- (void)dealloc;	// 0x34c2a8e9
- (id)description;	// 0x34c2a94d
// declared property getter: - (id)name;	// 0x34c2aa19
// declared property getter: - (id)nameSpace;	// 0x34c2a9f5
// declared property getter: - (Class)parseClass;	// 0x34c2aa3d
// declared property setter: - (void)setName:(id)name;	// 0x34c2aa2d
// declared property setter: - (void)setNameSpace:(id)space;	// 0x34c2aa09
// declared property setter: - (void)setParseClass:(Class)aClass;	// 0x34c2aa51
@end
