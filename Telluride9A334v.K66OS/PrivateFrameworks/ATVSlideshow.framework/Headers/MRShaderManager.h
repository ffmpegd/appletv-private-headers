/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface MRShaderManager : NSObject {
	NSMutableDictionary *mGLShadersPerContext;	// 4 = 0x4
	NSMutableDictionary *mShadersPerContext;	// 8 = 0x8
	NSMutableDictionary *mShaderDescriptions;	// 12 = 0xc
	NSLock *mGLShadersPerContextLock;	// 16 = 0x10
	NSLock *mShadersPerContextLock;	// 20 = 0x14
}
+ (void)initialize;	// 0x32f6f185
+ (id)shaderKeyForShaderID:(id)shaderID andArguments:(id)arguments;	// 0x32f70969
+ (id)sharedManager;	// 0x32f6f1ed
- (id)init;	// 0x32f6f1fd
- (unsigned)_glShaderForID:(id)anId inBaseContext:(id)baseContext isFragmentShader:(BOOL)shader withArguments:(id)arguments;	// 0x32f6fffd
- (void)cleanup;	// 0x32f6fb7d
- (void)dealloc;	// 0x32f6fafd
- (void)finalize;	// 0x32f6fb3d
- (void)forgetContext:(id)context;	// 0x32f6fcf5
- (void)registerShaderWithFragmentShaderSource:(id)fragmentShaderSource andVertexShaderName:(id)name forShaderID:(id)shaderID;	// 0x32f70b7d
- (void)registerVertexShaderWithVertexShaderSource:(id)vertexShaderSource forShaderID:(id)shaderID;	// 0x32f70ae5
- (void)releaseResources;	// 0x32f6fbf9
- (id)shaderForShaderID:(id)shaderID inContext:(id)context withArguments:(id)arguments;	// 0x32f70671
@end

