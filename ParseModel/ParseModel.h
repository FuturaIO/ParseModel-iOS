//
//  ParseModel.h
//  ParseModel
//
//  Parse Adaptation:
//  Created by Christopher Constable on 6/3/13.
//  Copyright (c) 2013 Futura IO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ParseModelBase.h"

@class PFObject;

@interface ParseModel : ParseModelBase

@property (nonatomic, strong) PFObject *parseObject;

+ (void)registerParseModel;

+ (instancetype)parseModelWithParseObject:(PFObject *)parseObject;

- (id)initWithParseObject:(PFObject *)parseObject;

@end
