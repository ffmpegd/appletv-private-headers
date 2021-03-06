/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, BuiltinConfig;
@protocol NetflixConfigProtocol, NSObject;

@interface ConfigParser : XXUnknownSuperclass {
	XML_ParserStructRef parser_;	// 4 = 0x4
	int parserDepth_;	// 8 = 0x8
	int tagListDepth_;	// 12 = 0xc
	char **currentTag_;	// 16 = 0x10
	BuiltinConfig *builtinConfig_;	// 20 = 0x14
	NSDictionary *builtinConfigParsableItems_;	// 24 = 0x18
	Class customNetflixConfigClass_;	// 28 = 0x1c
	id<NSObject, NetflixConfigProtocol> customNetflixConfig_;	// 32 = 0x20
	NSDictionary *customNetflixConfigParsableItems_;	// 36 = 0x24
}
@property(retain) BuiltinConfig *builtinConfig;	// G=0x50e979; S=0x50e98d; @synthesize=builtinConfig_
@property(retain) NSDictionary *builtinConfigParsableItems;	// G=0x50e99d; S=0x50e9b1; @synthesize=builtinConfigParsableItems_
@property(assign) char **currentTag;	// G=0x50e94d; S=0x50e961; @synthesize=currentTag_
@property(retain) id<NSObject, NetflixConfigProtocol> customNetflixConfig;	// G=0x50e9ed; S=0x50ea01; @synthesize=customNetflixConfig_
@property(assign) Class customNetflixConfigClass;	// G=0x50e9c1; S=0x50e9d5; @synthesize=customNetflixConfigClass_
@property(retain) NSDictionary *customNetflixConfigParsableItems;	// G=0x50ea11; S=0x50ea25; @synthesize=customNetflixConfigParsableItems_
@property(assign) XML_ParserStructRef parser;	// G=0x50e8c9; S=0x50e8dd; @synthesize=parser_
@property(assign) int parserDepth;	// G=0x50e8f5; S=0x50e909; @synthesize=parserDepth_
@property(assign) int tagListDepth;	// G=0x50e921; S=0x50e935; @synthesize=tagListDepth_
- (id)init;	// 0x50dca1
- (id)initWithCustomNetflixConfigClass:(Class)customNetflixConfigClass;	// 0x50dcb5
// declared property getter: - (id)builtinConfig;	// 0x50e979
// declared property getter: - (id)builtinConfigParsableItems;	// 0x50e99d
- (void)charData:(const char *)data withLength:(int)length;	// 0x50e339
// declared property getter: - (char **)currentTag;	// 0x50e94d
// declared property getter: - (id)customNetflixConfig;	// 0x50e9ed
// declared property getter: - (Class)customNetflixConfigClass;	// 0x50e9c1
// declared property getter: - (id)customNetflixConfigParsableItems;	// 0x50ea11
- (void)dealloc;	// 0x50dda9
- (void)dumpTags;	// 0x50e025
- (void)endElement:(const char *)element;	// 0x50e279
- (bool)parse:(id)parse;	// 0x50decd
// declared property getter: - (XML_ParserStructRef)parser;	// 0x50e8c9
// declared property getter: - (int)parserDepth;	// 0x50e8f5
// declared property setter: - (void)setBuiltinConfig:(id)config;	// 0x50e98d
// declared property setter: - (void)setBuiltinConfigParsableItems:(id)items;	// 0x50e9b1
// declared property setter: - (void)setCurrentTag:(char **)tag;	// 0x50e961
// declared property setter: - (void)setCustomNetflixConfig:(id)config;	// 0x50ea01
// declared property setter: - (void)setCustomNetflixConfigClass:(Class)aClass;	// 0x50e9d5
// declared property setter: - (void)setCustomNetflixConfigParsableItems:(id)items;	// 0x50ea25
// declared property setter: - (void)setParser:(XML_ParserStructRef)parser;	// 0x50e8dd
// declared property setter: - (void)setParserDepth:(int)depth;	// 0x50e909
// declared property setter: - (void)setTagListDepth:(int)depth;	// 0x50e935
- (void)startElement:(const char *)element withAttrs:(const char **)attrs;	// 0x50e059
// declared property getter: - (int)tagListDepth;	// 0x50e921
- (id)textToObject:(char *)object cls:(Class)cls;	// 0x50e701
@end

