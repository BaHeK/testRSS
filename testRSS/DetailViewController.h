//
//  DetailViewController.h
//  testRSS
//
//  Created by Ivan on 10.06.16.
//  Copyright © 2016 i_sokolov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

