//
//  ZAHeroAnimationFrames.h
//  8bit-zombie-arcade
//
//  Created by William Kamp on 10/16/13.
//  Copyright (c) 2013 Will Kamp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>

@interface ZACharachterAnimationFrames : NSObject

@property (nonatomic, strong, readonly) NSDictionary *animationFrames;
@property (nonatomic, strong, readonly) NSDictionary *sounds;

+(ZACharachterAnimationFrames *)sharedFrames;

-(void)loadAsyncWithCallback:(void(^)(void))completionBlock;
-(SKAction*)animationForSequence:(NSString*)sequence withTimePerFrame:(CGFloat)tpf;
-(SKAction*)getSoundActionForFile:(NSString*)soundFile;

@end
