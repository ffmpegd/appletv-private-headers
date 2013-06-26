/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MELoader : NSObject {
	NSMutableDictionary *_exporters;	// 4 = 0x4
	NSMutableDictionary *_exporterProperties;	// 8 = 0x8
}
- (id)init;	// 0x325739cd
- (void)dealloc;	// 0x32573a11
- (id)exporterIdentifierWithOptions:(id)options;	// 0x32573f59
- (id)exporterIdentifiers;	// 0x32573f39
- (id)exporterPropertyWithIdentifier:(id)identifier andKey:(id)key;	// 0x325742ed
- (id)exporterWithIdentifier:(id)identifier andDocument:(id)document andDelegate:(id)delegate;	// 0x3257427d
- (void)loadBuiltInPlugins;	// 0x32573b2d
- (void)loadEmbeddedPlugins;	// 0x32573a75
- (void)loadPluginAtPath:(id)path matchingIdentifier:(id)identifier;	// 0x32573c91
- (void)loadPluginWithIdentifier:(id)identifier;	// 0x32573a95
- (void)loadPluginsInFolder:(id)folder matchingIdentifier:(id)identifier;	// 0x32573ba1
- (void)registerExporterClass:(Class)aClass withIdentifier:(id)identifier andProperties:(id)properties;	// 0x32573df1
@end
